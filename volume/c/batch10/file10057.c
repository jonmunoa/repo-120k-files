// fichero 10057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10057;

Registro10057 crear_registro10057(int id) {
    Registro10057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
