// fichero 46281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46281;

Registro46281 crear_registro46281(int id) {
    Registro46281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
