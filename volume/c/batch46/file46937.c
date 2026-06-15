// fichero 46937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46937;

Registro46937 crear_registro46937(int id) {
    Registro46937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
