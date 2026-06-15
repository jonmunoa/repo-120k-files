// fichero 39933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39933;

Registro39933 crear_registro39933(int id) {
    Registro39933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
