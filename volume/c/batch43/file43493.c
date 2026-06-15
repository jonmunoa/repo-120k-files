// fichero 43493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43493;

Registro43493 crear_registro43493(int id) {
    Registro43493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
