// fichero 4913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4913;

Registro4913 crear_registro4913(int id) {
    Registro4913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
