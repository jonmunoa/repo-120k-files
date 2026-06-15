// fichero 1201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1201;

Registro1201 crear_registro1201(int id) {
    Registro1201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
