// fichero 7101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7101;

Registro7101 crear_registro7101(int id) {
    Registro7101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
