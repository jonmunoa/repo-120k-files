// fichero 45909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45909;

Registro45909 crear_registro45909(int id) {
    Registro45909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
