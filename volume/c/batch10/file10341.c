// fichero 10341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10341;

Registro10341 crear_registro10341(int id) {
    Registro10341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
