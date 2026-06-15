// fichero 49065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49065;

Registro49065 crear_registro49065(int id) {
    Registro49065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
