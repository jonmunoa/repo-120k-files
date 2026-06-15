// fichero 26725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26725;

Registro26725 crear_registro26725(int id) {
    Registro26725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
