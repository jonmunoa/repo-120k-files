// fichero 39557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39557;

Registro39557 crear_registro39557(int id) {
    Registro39557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
