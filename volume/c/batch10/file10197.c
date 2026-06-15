// fichero 10197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10197;

Registro10197 crear_registro10197(int id) {
    Registro10197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
