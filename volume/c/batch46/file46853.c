// fichero 46853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46853;

Registro46853 crear_registro46853(int id) {
    Registro46853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
