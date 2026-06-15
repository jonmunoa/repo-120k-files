// fichero 10253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10253;

Registro10253 crear_registro10253(int id) {
    Registro10253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
