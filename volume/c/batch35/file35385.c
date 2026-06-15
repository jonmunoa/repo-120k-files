// fichero 35385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35385;

Registro35385 crear_registro35385(int id) {
    Registro35385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
