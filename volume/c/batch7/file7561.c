// fichero 7561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7561;

Registro7561 crear_registro7561(int id) {
    Registro7561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
