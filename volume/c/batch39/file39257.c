// fichero 39257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39257;

Registro39257 crear_registro39257(int id) {
    Registro39257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
