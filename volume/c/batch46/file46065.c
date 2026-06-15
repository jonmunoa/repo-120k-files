// fichero 46065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46065;

Registro46065 crear_registro46065(int id) {
    Registro46065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
