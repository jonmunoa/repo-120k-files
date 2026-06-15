// fichero 10141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10141;

Registro10141 crear_registro10141(int id) {
    Registro10141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
