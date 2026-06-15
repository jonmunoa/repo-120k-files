// fichero 48069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48069;

Registro48069 crear_registro48069(int id) {
    Registro48069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
