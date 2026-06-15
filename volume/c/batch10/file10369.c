// fichero 10369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10369;

Registro10369 crear_registro10369(int id) {
    Registro10369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
