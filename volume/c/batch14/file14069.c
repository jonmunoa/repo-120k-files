// fichero 14069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14069;

Registro14069 crear_registro14069(int id) {
    Registro14069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
