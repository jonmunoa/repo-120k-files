// fichero 1989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1989;

Registro1989 crear_registro1989(int id) {
    Registro1989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
