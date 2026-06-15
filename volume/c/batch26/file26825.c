// fichero 26825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26825;

Registro26825 crear_registro26825(int id) {
    Registro26825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
