// fichero 10593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10593;

Registro10593 crear_registro10593(int id) {
    Registro10593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
