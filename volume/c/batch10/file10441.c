// fichero 10441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10441;

Registro10441 crear_registro10441(int id) {
    Registro10441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
