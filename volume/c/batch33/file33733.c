// fichero 33733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33733;

Registro33733 crear_registro33733(int id) {
    Registro33733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
