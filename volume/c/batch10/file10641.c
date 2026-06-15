// fichero 10641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10641;

Registro10641 crear_registro10641(int id) {
    Registro10641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
