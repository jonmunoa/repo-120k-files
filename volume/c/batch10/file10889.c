// fichero 10889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10889;

Registro10889 crear_registro10889(int id) {
    Registro10889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
