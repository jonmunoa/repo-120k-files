// fichero 18069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18069;

Registro18069 crear_registro18069(int id) {
    Registro18069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
