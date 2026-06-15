// fichero 43549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43549;

Registro43549 crear_registro43549(int id) {
    Registro43549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
