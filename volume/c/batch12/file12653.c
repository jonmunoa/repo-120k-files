// fichero 12653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12653;

Registro12653 crear_registro12653(int id) {
    Registro12653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
