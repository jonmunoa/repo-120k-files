// fichero 29613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29613;

Registro29613 crear_registro29613(int id) {
    Registro29613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
