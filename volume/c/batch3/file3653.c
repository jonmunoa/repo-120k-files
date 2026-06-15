// fichero 3653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3653;

Registro3653 crear_registro3653(int id) {
    Registro3653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
