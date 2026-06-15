// fichero 15953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15953;

Registro15953 crear_registro15953(int id) {
    Registro15953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
