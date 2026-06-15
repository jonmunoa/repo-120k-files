// fichero 32485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32485;

Registro32485 crear_registro32485(int id) {
    Registro32485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
