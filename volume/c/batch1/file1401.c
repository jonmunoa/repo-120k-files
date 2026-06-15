// fichero 1401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1401;

Registro1401 crear_registro1401(int id) {
    Registro1401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
