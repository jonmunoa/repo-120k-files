// fichero 8341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8341;

Registro8341 crear_registro8341(int id) {
    Registro8341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
