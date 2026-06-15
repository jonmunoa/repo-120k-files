// fichero 32757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32757;

Registro32757 crear_registro32757(int id) {
    Registro32757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
