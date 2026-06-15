// fichero 10585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10585;

Registro10585 crear_registro10585(int id) {
    Registro10585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
