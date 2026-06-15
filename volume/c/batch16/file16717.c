// fichero 16717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16717;

Registro16717 crear_registro16717(int id) {
    Registro16717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
