// fichero 1937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1937;

Registro1937 crear_registro1937(int id) {
    Registro1937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
