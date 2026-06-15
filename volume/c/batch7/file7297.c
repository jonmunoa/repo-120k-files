// fichero 7297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7297;

Registro7297 crear_registro7297(int id) {
    Registro7297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
