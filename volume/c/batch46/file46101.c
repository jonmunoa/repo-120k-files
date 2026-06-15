// fichero 46101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46101;

Registro46101 crear_registro46101(int id) {
    Registro46101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
