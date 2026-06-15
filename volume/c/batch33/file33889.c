// fichero 33889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33889;

Registro33889 crear_registro33889(int id) {
    Registro33889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
