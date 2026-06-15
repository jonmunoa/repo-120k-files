// fichero 30509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30509;

Registro30509 crear_registro30509(int id) {
    Registro30509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
