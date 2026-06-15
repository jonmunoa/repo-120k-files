// fichero 48017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48017;

Registro48017 crear_registro48017(int id) {
    Registro48017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
