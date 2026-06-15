// fichero 4937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4937;

Registro4937 crear_registro4937(int id) {
    Registro4937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
