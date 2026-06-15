// fichero 10245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10245;

Registro10245 crear_registro10245(int id) {
    Registro10245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
