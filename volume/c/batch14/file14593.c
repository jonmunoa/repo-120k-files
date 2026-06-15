// fichero 14593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14593;

Registro14593 crear_registro14593(int id) {
    Registro14593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
