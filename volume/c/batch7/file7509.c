// fichero 7509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7509;

Registro7509 crear_registro7509(int id) {
    Registro7509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
