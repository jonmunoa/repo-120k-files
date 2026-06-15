// fichero 46961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46961;

Registro46961 crear_registro46961(int id) {
    Registro46961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
