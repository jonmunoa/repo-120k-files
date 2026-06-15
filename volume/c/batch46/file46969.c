// fichero 46969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46969;

Registro46969 crear_registro46969(int id) {
    Registro46969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
