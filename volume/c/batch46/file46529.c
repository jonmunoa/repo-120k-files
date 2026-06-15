// fichero 46529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46529;

Registro46529 crear_registro46529(int id) {
    Registro46529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
