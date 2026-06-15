// fichero 48405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48405;

Registro48405 crear_registro48405(int id) {
    Registro48405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
