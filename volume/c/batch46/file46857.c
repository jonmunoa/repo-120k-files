// fichero 46857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46857;

Registro46857 crear_registro46857(int id) {
    Registro46857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
