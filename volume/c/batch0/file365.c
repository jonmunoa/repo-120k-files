// fichero 365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro365;

Registro365 crear_registro365(int id) {
    Registro365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
