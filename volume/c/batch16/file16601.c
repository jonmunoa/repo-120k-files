// fichero 16601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16601;

Registro16601 crear_registro16601(int id) {
    Registro16601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
