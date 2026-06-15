// fichero 16653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16653;

Registro16653 crear_registro16653(int id) {
    Registro16653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
