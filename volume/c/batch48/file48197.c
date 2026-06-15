// fichero 48197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48197;

Registro48197 crear_registro48197(int id) {
    Registro48197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
