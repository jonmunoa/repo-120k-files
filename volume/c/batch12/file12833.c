// fichero 12833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12833;

Registro12833 crear_registro12833(int id) {
    Registro12833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
