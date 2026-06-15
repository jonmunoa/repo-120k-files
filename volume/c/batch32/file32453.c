// fichero 32453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32453;

Registro32453 crear_registro32453(int id) {
    Registro32453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
