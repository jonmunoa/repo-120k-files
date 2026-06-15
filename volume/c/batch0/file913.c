// fichero 913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro913;

Registro913 crear_registro913(int id) {
    Registro913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
