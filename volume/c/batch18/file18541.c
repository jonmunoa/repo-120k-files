// fichero 18541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18541;

Registro18541 crear_registro18541(int id) {
    Registro18541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
