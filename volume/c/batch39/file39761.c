// fichero 39761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39761;

Registro39761 crear_registro39761(int id) {
    Registro39761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
