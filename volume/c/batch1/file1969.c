// fichero 1969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1969;

Registro1969 crear_registro1969(int id) {
    Registro1969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
