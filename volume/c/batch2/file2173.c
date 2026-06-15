// fichero 2173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2173;

Registro2173 crear_registro2173(int id) {
    Registro2173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
