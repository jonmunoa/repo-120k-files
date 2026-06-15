// fichero 8409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8409;

Registro8409 crear_registro8409(int id) {
    Registro8409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
