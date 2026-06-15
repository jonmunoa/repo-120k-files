// fichero 43089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43089;

Registro43089 crear_registro43089(int id) {
    Registro43089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
