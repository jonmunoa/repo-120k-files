// fichero 20653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20653;

Registro20653 crear_registro20653(int id) {
    Registro20653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
