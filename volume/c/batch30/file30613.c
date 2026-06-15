// fichero 30613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30613;

Registro30613 crear_registro30613(int id) {
    Registro30613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
