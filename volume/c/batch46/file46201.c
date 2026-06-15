// fichero 46201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46201;

Registro46201 crear_registro46201(int id) {
    Registro46201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
