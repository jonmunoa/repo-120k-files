// fichero 29829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29829;

Registro29829 crear_registro29829(int id) {
    Registro29829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
