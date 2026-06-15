// fichero 36601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36601;

Registro36601 crear_registro36601(int id) {
    Registro36601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
