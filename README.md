# Complexify-ObjC
Objective-C port of [Dan Palmer's jQuery Complexify plugin](http://danpalmer.me/jquery-complexify/).

"Complexify aims to provide a good measure of password complexity for ~~websites~~ apps to use both for giving hints to users in the form of ~~strength bars~~ security level, and for casually enforcing a minimum complexity for security reasons."

## Usage

**Computing password complexity**
```objective-c
-(void)checkComplexityOfPassword:(NSString *)password completionHandler:(void(^)(BOOL valid, CGFloat complexity))completionHandler;

Complexify *complexify = [[Complexify alloc] init];
[complexify checkComplexityOfPassword:@"foobar"
			completionHandler:^(BOOL valid, CGFloat complexity){
				/*
					valid :
						BOOL
						YES | NO

					complexity :
						CGFloat
						0 <= complexity <= 100
				*/
			}];

}];
```