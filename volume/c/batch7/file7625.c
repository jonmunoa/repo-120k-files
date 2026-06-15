// fichero 7625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7625;

Registro7625 crear_registro7625(int id) {
    Registro7625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
