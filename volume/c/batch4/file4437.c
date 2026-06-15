// fichero 4437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4437;

Registro4437 crear_registro4437(int id) {
    Registro4437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
