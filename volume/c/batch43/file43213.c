// fichero 43213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43213;

Registro43213 crear_registro43213(int id) {
    Registro43213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
