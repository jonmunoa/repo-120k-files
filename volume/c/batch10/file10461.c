// fichero 10461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10461;

Registro10461 crear_registro10461(int id) {
    Registro10461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
