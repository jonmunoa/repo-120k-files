// fichero 46829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46829;

Registro46829 crear_registro46829(int id) {
    Registro46829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
