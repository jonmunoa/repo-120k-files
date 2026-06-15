// fichero 19653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19653;

Registro19653 crear_registro19653(int id) {
    Registro19653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
