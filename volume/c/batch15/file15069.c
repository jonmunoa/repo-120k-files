// fichero 15069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15069;

Registro15069 crear_registro15069(int id) {
    Registro15069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
