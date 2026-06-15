// fichero 28437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28437;

Registro28437 crear_registro28437(int id) {
    Registro28437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
