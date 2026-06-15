// fichero 46045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46045;

Registro46045 crear_registro46045(int id) {
    Registro46045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
