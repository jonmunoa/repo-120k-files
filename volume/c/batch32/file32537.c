// fichero 32537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32537;

Registro32537 crear_registro32537(int id) {
    Registro32537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
