// fichero 10397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10397;

Registro10397 crear_registro10397(int id) {
    Registro10397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
