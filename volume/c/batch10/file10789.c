// fichero 10789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10789;

Registro10789 crear_registro10789(int id) {
    Registro10789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
