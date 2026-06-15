// fichero 1857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1857;

Registro1857 crear_registro1857(int id) {
    Registro1857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
