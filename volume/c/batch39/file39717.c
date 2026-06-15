// fichero 39717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39717;

Registro39717 crear_registro39717(int id) {
    Registro39717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
