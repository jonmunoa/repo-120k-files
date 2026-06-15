// fichero 7393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7393;

Registro7393 crear_registro7393(int id) {
    Registro7393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
