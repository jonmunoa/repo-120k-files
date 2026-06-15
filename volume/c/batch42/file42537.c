// fichero 42537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42537;

Registro42537 crear_registro42537(int id) {
    Registro42537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
