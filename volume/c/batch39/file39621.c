// fichero 39621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39621;

Registro39621 crear_registro39621(int id) {
    Registro39621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
