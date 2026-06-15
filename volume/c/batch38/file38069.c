// fichero 38069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38069;

Registro38069 crear_registro38069(int id) {
    Registro38069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
