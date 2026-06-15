// fichero 33453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33453;

Registro33453 crear_registro33453(int id) {
    Registro33453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
