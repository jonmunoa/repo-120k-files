// fichero 4653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4653;

Registro4653 crear_registro4653(int id) {
    Registro4653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
