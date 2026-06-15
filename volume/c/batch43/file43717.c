// fichero 43717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43717;

Registro43717 crear_registro43717(int id) {
    Registro43717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
