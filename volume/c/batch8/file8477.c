// fichero 8477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8477;

Registro8477 crear_registro8477(int id) {
    Registro8477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
