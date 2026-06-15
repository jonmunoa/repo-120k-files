// fichero 29749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29749;

Registro29749 crear_registro29749(int id) {
    Registro29749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
