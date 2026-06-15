// fichero 10969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10969;

Registro10969 crear_registro10969(int id) {
    Registro10969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
