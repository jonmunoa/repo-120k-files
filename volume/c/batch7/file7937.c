// fichero 7937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7937;

Registro7937 crear_registro7937(int id) {
    Registro7937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
