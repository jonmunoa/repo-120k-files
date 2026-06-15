// fichero 10561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10561;

Registro10561 crear_registro10561(int id) {
    Registro10561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
