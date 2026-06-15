// fichero 14433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14433;

Registro14433 crear_registro14433(int id) {
    Registro14433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
