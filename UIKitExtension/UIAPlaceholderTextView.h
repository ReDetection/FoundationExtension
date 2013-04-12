//
//  UIAPlaceholderTextView.h
//  FoundationExtension
//
//  Created by Jeong YunWon on 13. 4. 12..
//  Copyright (c) 2013 youknowone.org. All rights reserved.
//

/*!
 *  @brief UITextView with placeholder
 */
@interface UIAPlaceholderTextView : UITextView {
    UITextView *_placeholderTextView;
    NSString *_placeholderString;
    BOOL _placeholderAnimated;
}

/*!
 *  @brief Placeholder string
 */
@property(nonatomic, copy) NSString *placeholderString;

/*!
 *  @brief Placeholder color. Default is gray.
 */
@property(nonatomic, retain) UIColor *placeholderColor;

/*!
 *  @brief Placeholder shows/hides with animation. Default is YES.
 */
@property(nonatomic, assign, getter=isPlaceholderAnimated) BOOL placeholderAnimated;

@end
