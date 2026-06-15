// fichero 10665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10665;

Registro10665 crear_registro10665(int id) {
    Registro10665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
