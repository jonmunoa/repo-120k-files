// fichero 32017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32017;

Registro32017 crear_registro32017(int id) {
    Registro32017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
