// fichero 1365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1365;

Registro1365 crear_registro1365(int id) {
    Registro1365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
