// fichero 43933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43933;

Registro43933 crear_registro43933(int id) {
    Registro43933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
