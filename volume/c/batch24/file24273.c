// fichero 24273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24273;

Registro24273 crear_registro24273(int id) {
    Registro24273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
