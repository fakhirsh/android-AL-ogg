//
//  Texture.cpp
//  libpngMem
//
//  Created by Fakhir Shaheen on 02/12/2014.
//  Copyright (c) 2014 Fakhir Shaheen. All rights reserved.
//

#include "AssetLoader.h"


AAssetManager * AssetLoader::assetManager = NULL;

bool AssetLoader::GetAssetStream(std::string assetPath, std::vector<char> & buffer)
{
    
    AAsset * asset = AAssetManager_open(assetManager, assetPath.c_str(), AASSET_MODE_UNKNOWN);
    if(!asset)
    {
        return false;
    }
    
    int size = AAsset_getLength(asset);

    buffer.resize(size);
    AAsset_read (asset, &buffer[0], size);
    
    AAsset_close(asset);
    
    return true;
}

