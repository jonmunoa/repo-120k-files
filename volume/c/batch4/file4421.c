// fichero 4421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4421;

Registro4421 crear_registro4421(int id) {
    Registro4421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
