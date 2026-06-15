// fichero 42213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42213;

Registro42213 crear_registro42213(int id) {
    Registro42213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
