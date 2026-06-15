// fichero 46189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46189;

Registro46189 crear_registro46189(int id) {
    Registro46189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
