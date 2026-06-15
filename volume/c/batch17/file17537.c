// fichero 17537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17537;

Registro17537 crear_registro17537(int id) {
    Registro17537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
