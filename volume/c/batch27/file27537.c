// fichero 27537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27537;

Registro27537 crear_registro27537(int id) {
    Registro27537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
