// fichero 39941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39941;

Registro39941 crear_registro39941(int id) {
    Registro39941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
