// fichero 4069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4069;

Registro4069 crear_registro4069(int id) {
    Registro4069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
