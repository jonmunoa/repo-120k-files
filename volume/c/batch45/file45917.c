// fichero 45917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45917;

Registro45917 crear_registro45917(int id) {
    Registro45917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
