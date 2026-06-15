// fichero 1409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1409;

Registro1409 crear_registro1409(int id) {
    Registro1409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
