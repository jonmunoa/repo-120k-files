// fichero 43765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43765;

Registro43765 crear_registro43765(int id) {
    Registro43765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
