// fichero 46437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46437;

Registro46437 crear_registro46437(int id) {
    Registro46437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
