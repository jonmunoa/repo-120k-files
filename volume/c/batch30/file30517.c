// fichero 30517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30517;

Registro30517 crear_registro30517(int id) {
    Registro30517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
