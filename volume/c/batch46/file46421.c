// fichero 46421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46421;

Registro46421 crear_registro46421(int id) {
    Registro46421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
