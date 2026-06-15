// fichero 43769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43769;

Registro43769 crear_registro43769(int id) {
    Registro43769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
