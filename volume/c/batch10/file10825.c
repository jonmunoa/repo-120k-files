// fichero 10825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10825;

Registro10825 crear_registro10825(int id) {
    Registro10825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
