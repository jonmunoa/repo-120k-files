// fichero 33601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33601;

Registro33601 crear_registro33601(int id) {
    Registro33601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
