// fichero 27433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27433;

Registro27433 crear_registro27433(int id) {
    Registro27433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
