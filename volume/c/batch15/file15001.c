// fichero 15001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15001;

Registro15001 crear_registro15001(int id) {
    Registro15001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
