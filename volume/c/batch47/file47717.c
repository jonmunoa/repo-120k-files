// fichero 47717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47717;

Registro47717 crear_registro47717(int id) {
    Registro47717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
