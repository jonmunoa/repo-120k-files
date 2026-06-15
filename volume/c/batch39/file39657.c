// fichero 39657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39657;

Registro39657 crear_registro39657(int id) {
    Registro39657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
