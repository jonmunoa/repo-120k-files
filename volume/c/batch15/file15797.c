// fichero 15797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15797;

Registro15797 crear_registro15797(int id) {
    Registro15797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
