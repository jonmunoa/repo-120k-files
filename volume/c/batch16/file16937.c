// fichero 16937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16937;

Registro16937 crear_registro16937(int id) {
    Registro16937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
