// fichero 14065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14065;

Registro14065 crear_registro14065(int id) {
    Registro14065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
