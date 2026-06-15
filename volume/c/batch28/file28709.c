// fichero 28709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28709;

Registro28709 crear_registro28709(int id) {
    Registro28709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
