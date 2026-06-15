// fichero 32185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32185;

Registro32185 crear_registro32185(int id) {
    Registro32185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
