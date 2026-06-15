// fichero 21173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21173;

Registro21173 crear_registro21173(int id) {
    Registro21173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
