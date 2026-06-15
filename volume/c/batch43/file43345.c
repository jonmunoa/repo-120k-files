// fichero 43345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43345;

Registro43345 crear_registro43345(int id) {
    Registro43345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
