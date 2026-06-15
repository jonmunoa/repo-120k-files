// fichero 39085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39085;

Registro39085 crear_registro39085(int id) {
    Registro39085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
