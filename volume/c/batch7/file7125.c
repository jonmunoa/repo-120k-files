// fichero 7125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7125;

Registro7125 crear_registro7125(int id) {
    Registro7125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
