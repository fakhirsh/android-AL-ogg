//
//  ALDemo.h
//  libpngMem
//
//  Created by Fakhir Shaheen on 02/12/2014.
//  Copyright (c) 2014 Fakhir Shaheen. All rights reserved.
//

#ifndef __libpngMem__ALDemo__
#define __libpngMem__ALDemo__

#include <string>
#include <vector>

bool InitSound();

bool LoadOGGFromMem(std::vector<char> & oggFileData, std::vector<char> & buffer);

void PlaySound();

#endif /* defined(__libpngMem__ALDemo__) */
