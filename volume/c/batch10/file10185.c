// fichero 10185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10185;

Registro10185 crear_registro10185(int id) {
    Registro10185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
