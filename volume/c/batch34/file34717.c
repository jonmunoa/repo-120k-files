// fichero 34717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34717;

Registro34717 crear_registro34717(int id) {
    Registro34717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
