// fichero 43913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43913;

Registro43913 crear_registro43913(int id) {
    Registro43913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
