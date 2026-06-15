// fichero 28233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28233;

Registro28233 crear_registro28233(int id) {
    Registro28233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
