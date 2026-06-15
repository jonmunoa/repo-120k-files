// fichero 46613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46613;

Registro46613 crear_registro46613(int id) {
    Registro46613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
