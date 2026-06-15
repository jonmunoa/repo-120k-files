// fichero 7525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7525;

Registro7525 crear_registro7525(int id) {
    Registro7525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
