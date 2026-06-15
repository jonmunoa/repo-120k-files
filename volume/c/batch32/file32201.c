// fichero 32201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32201;

Registro32201 crear_registro32201(int id) {
    Registro32201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
