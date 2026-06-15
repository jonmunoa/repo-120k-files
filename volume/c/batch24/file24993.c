// fichero 24993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24993;

Registro24993 crear_registro24993(int id) {
    Registro24993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
