//
//  HFTextRepresenter.h
//  HexFiend_2
//
//  Created by Peter Ammon on 11/3/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//

#import <HexFiend/HFRepresenter.h>
#import <HexFiend/HFByteArray_ToString.h>

/* A representer that draws into a text view (e.g. the hex or ASCII view) */

@interface HFTextRepresenter : HFRepresenter {
    
}

// HFTextRepresenter forwards these messages to its HFRepresenterTextView
- (NSUInteger)maximumBytesPerLineForViewWidth:(CGFloat)viewWidth;
- (CGFloat)minimumViewWidthForBytesPerLine:(NSUInteger)bytesPerLine;

- (NSArray *)displayedSelectedContentsRanges; //returns an array of NSValues representing the selected ranges clipped to the displayed range.

- (void)beginSelectionWithEvent:(NSEvent *)event forCharacterIndex:(NSUInteger)characterIndex;
- (void)continueSelectionWithEvent:(NSEvent *)event forCharacterIndex:(NSUInteger)characterIndex;
- (void)endSelectionWithEvent:(NSEvent *)event forCharacterIndex:(NSUInteger)characterIndex;

@end