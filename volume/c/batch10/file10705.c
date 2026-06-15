// fichero 10705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10705;

Registro10705 crear_registro10705(int id) {
    Registro10705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
