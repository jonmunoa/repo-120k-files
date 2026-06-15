// fichero 10869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10869;

Registro10869 crear_registro10869(int id) {
    Registro10869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
