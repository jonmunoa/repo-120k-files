// fichero 33977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33977;

Registro33977 crear_registro33977(int id) {
    Registro33977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
