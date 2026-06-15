// fichero 32021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32021;

Registro32021 crear_registro32021(int id) {
    Registro32021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
