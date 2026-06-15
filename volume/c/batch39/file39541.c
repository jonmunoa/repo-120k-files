// fichero 39541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39541;

Registro39541 crear_registro39541(int id) {
    Registro39541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
