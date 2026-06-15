// fichero 42329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42329;

Registro42329 crear_registro42329(int id) {
    Registro42329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
