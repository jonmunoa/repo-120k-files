// fichero 46405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46405;

Registro46405 crear_registro46405(int id) {
    Registro46405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
