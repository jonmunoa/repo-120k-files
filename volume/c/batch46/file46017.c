// fichero 46017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46017;

Registro46017 crear_registro46017(int id) {
    Registro46017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
