// fichero 28977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28977;

Registro28977 crear_registro28977(int id) {
    Registro28977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
