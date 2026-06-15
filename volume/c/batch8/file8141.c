// fichero 8141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8141;

Registro8141 crear_registro8141(int id) {
    Registro8141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
