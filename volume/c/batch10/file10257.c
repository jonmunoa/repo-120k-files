// fichero 10257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10257;

Registro10257 crear_registro10257(int id) {
    Registro10257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
