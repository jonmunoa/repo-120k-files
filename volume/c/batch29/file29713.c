// fichero 29713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29713;

Registro29713 crear_registro29713(int id) {
    Registro29713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
