// fichero 15821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15821;

Registro15821 crear_registro15821(int id) {
    Registro15821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
