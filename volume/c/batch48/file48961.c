// fichero 48961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48961;

Registro48961 crear_registro48961(int id) {
    Registro48961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
