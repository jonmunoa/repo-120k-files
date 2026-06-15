// fichero 10921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10921;

Registro10921 crear_registro10921(int id) {
    Registro10921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
