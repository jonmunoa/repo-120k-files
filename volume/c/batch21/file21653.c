// fichero 21653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21653;

Registro21653 crear_registro21653(int id) {
    Registro21653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
