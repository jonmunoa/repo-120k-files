// fichero 45857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45857;

Registro45857 crear_registro45857(int id) {
    Registro45857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
