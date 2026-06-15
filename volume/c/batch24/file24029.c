// fichero 24029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24029;

Registro24029 crear_registro24029(int id) {
    Registro24029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
