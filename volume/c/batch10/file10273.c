// fichero 10273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10273;

Registro10273 crear_registro10273(int id) {
    Registro10273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
