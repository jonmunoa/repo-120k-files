// fichero 48821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48821;

Registro48821 crear_registro48821(int id) {
    Registro48821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
