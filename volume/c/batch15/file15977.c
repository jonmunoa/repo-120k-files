// fichero 15977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15977;

Registro15977 crear_registro15977(int id) {
    Registro15977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
