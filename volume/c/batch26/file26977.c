// fichero 26977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26977;

Registro26977 crear_registro26977(int id) {
    Registro26977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
