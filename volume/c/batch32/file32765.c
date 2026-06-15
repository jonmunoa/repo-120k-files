// fichero 32765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32765;

Registro32765 crear_registro32765(int id) {
    Registro32765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
