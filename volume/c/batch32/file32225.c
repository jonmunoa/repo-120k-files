// fichero 32225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32225;

Registro32225 crear_registro32225(int id) {
    Registro32225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
