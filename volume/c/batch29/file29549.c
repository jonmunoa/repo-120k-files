// fichero 29549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29549;

Registro29549 crear_registro29549(int id) {
    Registro29549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
