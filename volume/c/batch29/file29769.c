// fichero 29769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29769;

Registro29769 crear_registro29769(int id) {
    Registro29769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
