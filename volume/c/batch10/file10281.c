// fichero 10281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10281;

Registro10281 crear_registro10281(int id) {
    Registro10281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
