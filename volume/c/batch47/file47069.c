// fichero 47069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47069;

Registro47069 crear_registro47069(int id) {
    Registro47069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
