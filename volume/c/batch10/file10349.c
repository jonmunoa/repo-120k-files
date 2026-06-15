// fichero 10349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10349;

Registro10349 crear_registro10349(int id) {
    Registro10349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
