// fichero 39429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39429;

Registro39429 crear_registro39429(int id) {
    Registro39429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
