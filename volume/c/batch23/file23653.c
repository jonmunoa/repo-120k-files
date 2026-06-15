// fichero 23653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23653;

Registro23653 crear_registro23653(int id) {
    Registro23653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
