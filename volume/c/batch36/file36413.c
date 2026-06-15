// fichero 36413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36413;

Registro36413 crear_registro36413(int id) {
    Registro36413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
