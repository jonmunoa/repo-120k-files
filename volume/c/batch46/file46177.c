// fichero 46177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46177;

Registro46177 crear_registro46177(int id) {
    Registro46177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
