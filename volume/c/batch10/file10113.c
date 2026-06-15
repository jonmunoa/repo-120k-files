// fichero 10113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10113;

Registro10113 crear_registro10113(int id) {
    Registro10113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
