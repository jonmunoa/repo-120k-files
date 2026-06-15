// fichero 46069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46069;

Registro46069 crear_registro46069(int id) {
    Registro46069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
