// fichero 33549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33549;

Registro33549 crear_registro33549(int id) {
    Registro33549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
