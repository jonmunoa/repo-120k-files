// fichero 29561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29561;

Registro29561 crear_registro29561(int id) {
    Registro29561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
