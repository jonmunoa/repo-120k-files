// fichero 37069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37069;

Registro37069 crear_registro37069(int id) {
    Registro37069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
