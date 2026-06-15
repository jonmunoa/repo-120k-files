// fichero 44233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44233;

Registro44233 crear_registro44233(int id) {
    Registro44233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
