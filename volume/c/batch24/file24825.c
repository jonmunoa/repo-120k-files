// fichero 24825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24825;

Registro24825 crear_registro24825(int id) {
    Registro24825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
