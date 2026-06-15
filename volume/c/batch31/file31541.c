// fichero 31541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31541;

Registro31541 crear_registro31541(int id) {
    Registro31541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
