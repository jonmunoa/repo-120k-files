// fichero 32197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32197;

Registro32197 crear_registro32197(int id) {
    Registro32197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
