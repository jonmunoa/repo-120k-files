// fichero 39713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39713;

Registro39713 crear_registro39713(int id) {
    Registro39713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
