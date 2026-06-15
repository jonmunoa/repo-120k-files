// fichero 32173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32173;

Registro32173 crear_registro32173(int id) {
    Registro32173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
