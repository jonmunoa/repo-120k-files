// fichero 329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro329;

Registro329 crear_registro329(int id) {
    Registro329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
