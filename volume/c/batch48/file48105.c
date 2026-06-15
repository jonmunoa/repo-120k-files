// fichero 48105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48105;

Registro48105 crear_registro48105(int id) {
    Registro48105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
