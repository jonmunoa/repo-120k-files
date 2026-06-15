// fichero 27653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27653;

Registro27653 crear_registro27653(int id) {
    Registro27653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
