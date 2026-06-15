// fichero 29113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29113;

Registro29113 crear_registro29113(int id) {
    Registro29113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
