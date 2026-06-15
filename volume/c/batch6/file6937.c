// fichero 6937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6937;

Registro6937 crear_registro6937(int id) {
    Registro6937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
