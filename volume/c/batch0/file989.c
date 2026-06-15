// fichero 989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro989;

Registro989 crear_registro989(int id) {
    Registro989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
