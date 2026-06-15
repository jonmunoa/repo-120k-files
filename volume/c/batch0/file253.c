// fichero 253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro253;

Registro253 crear_registro253(int id) {
    Registro253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
