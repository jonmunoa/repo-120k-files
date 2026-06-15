// fichero 24717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24717;

Registro24717 crear_registro24717(int id) {
    Registro24717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
