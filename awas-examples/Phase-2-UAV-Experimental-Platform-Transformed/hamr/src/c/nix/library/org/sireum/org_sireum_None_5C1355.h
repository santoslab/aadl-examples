#ifndef SIREUM_H_org_sireum_None_5C1355
#define SIREUM_H_org_sireum_None_5C1355
#include <types.h>

// None[IS[Z, Z]]


B None_5C1355__eq(None_5C1355 this, None_5C1355 other);
inline B None_5C1355__ne(None_5C1355 this, None_5C1355 other) {
  return !None_5C1355__eq(this, other);
};
void None_5C1355_string_(STACK_FRAME String result, None_5C1355 this);
void None_5C1355_cprint(None_5C1355 this, B isOut);

inline B None_5C1355__is(STACK_FRAME void* this) {
  return ((None_5C1355) this)->type == TNone_5C1355;
}

inline None_5C1355 None_5C1355__as(STACK_FRAME void *this) {
  if (None_5C1355__is(CALLER this)) return (None_5C1355) this;
  fprintf(stderr, "Invalid case from %s to None[IS[Z, Z]].", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void None_5C1355_apply(STACK_FRAME None_5C1355 this);

#endif