// fichero 45417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45417;

Registro45417 crear_registro45417(int id) {
    Registro45417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
