// fichero 7453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7453;

Registro7453 crear_registro7453(int id) {
    Registro7453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
