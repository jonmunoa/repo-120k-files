// fichero 32065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32065;

Registro32065 crear_registro32065(int id) {
    Registro32065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
