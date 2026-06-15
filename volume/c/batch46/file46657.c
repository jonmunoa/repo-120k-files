// fichero 46657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46657;

Registro46657 crear_registro46657(int id) {
    Registro46657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
