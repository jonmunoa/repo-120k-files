// fichero 20861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20861;

Registro20861 crear_registro20861(int id) {
    Registro20861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
