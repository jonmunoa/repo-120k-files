// fichero 43857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43857;

Registro43857 crear_registro43857(int id) {
    Registro43857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
