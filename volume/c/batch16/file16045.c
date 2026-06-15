// fichero 16045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16045;

Registro16045 crear_registro16045(int id) {
    Registro16045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
