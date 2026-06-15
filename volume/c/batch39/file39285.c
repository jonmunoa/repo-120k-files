// fichero 39285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39285;

Registro39285 crear_registro39285(int id) {
    Registro39285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
