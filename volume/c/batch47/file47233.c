// fichero 47233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47233;

Registro47233 crear_registro47233(int id) {
    Registro47233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
