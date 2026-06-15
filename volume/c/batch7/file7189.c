// fichero 7189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7189;

Registro7189 crear_registro7189(int id) {
    Registro7189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
