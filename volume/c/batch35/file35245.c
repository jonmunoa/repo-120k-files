// fichero 35245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35245;

Registro35245 crear_registro35245(int id) {
    Registro35245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
