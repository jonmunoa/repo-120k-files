// fichero 40717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40717;

Registro40717 crear_registro40717(int id) {
    Registro40717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
