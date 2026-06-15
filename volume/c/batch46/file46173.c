// fichero 46173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46173;

Registro46173 crear_registro46173(int id) {
    Registro46173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
