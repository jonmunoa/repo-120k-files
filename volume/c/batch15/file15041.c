// fichero 15041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15041;

Registro15041 crear_registro15041(int id) {
    Registro15041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
