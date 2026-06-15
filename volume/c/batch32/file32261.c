// fichero 32261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32261;

Registro32261 crear_registro32261(int id) {
    Registro32261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
