// fichero 45537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45537;

Registro45537 crear_registro45537(int id) {
    Registro45537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
