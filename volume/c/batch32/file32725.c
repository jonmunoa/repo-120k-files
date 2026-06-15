// fichero 32725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32725;

Registro32725 crear_registro32725(int id) {
    Registro32725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
