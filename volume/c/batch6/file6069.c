// fichero 6069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6069;

Registro6069 crear_registro6069(int id) {
    Registro6069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
