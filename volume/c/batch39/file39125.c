// fichero 39125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39125;

Registro39125 crear_registro39125(int id) {
    Registro39125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
