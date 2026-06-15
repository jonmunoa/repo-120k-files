// fichero 7825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7825;

Registro7825 crear_registro7825(int id) {
    Registro7825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
