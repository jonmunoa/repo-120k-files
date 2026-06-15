// fichero 34653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34653;

Registro34653 crear_registro34653(int id) {
    Registro34653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
