// fichero 39805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39805;

Registro39805 crear_registro39805(int id) {
    Registro39805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
