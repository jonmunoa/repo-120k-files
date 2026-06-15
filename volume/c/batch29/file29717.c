// fichero 29717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29717;

Registro29717 crear_registro29717(int id) {
    Registro29717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
