// fichero 43993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43993;

Registro43993 crear_registro43993(int id) {
    Registro43993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
