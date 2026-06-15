// fichero 409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro409;

Registro409 crear_registro409(int id) {
    Registro409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
