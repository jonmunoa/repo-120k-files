// fichero 26813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26813;

Registro26813 crear_registro26813(int id) {
    Registro26813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
