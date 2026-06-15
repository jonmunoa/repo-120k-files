// fichero 26477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26477;

Registro26477 crear_registro26477(int id) {
    Registro26477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
