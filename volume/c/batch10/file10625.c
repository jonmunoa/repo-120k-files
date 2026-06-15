// fichero 10625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10625;

Registro10625 crear_registro10625(int id) {
    Registro10625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
