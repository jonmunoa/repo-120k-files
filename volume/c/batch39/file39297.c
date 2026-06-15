// fichero 39297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39297;

Registro39297 crear_registro39297(int id) {
    Registro39297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
