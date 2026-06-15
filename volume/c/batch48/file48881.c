// fichero 48881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48881;

Registro48881 crear_registro48881(int id) {
    Registro48881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
