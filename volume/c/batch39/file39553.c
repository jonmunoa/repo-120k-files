// fichero 39553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39553;

Registro39553 crear_registro39553(int id) {
    Registro39553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
