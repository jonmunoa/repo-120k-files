// fichero 8597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8597;

Registro8597 crear_registro8597(int id) {
    Registro8597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
