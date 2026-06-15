// fichero 10329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10329;

Registro10329 crear_registro10329(int id) {
    Registro10329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
