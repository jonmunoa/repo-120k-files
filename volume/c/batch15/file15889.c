// fichero 15889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15889;

Registro15889 crear_registro15889(int id) {
    Registro15889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
