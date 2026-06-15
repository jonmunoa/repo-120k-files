// fichero 10481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10481;

Registro10481 crear_registro10481(int id) {
    Registro10481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
