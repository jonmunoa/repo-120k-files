// fichero 39465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39465;

Registro39465 crear_registro39465(int id) {
    Registro39465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
