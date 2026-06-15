// fichero 1677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1677;

Registro1677 crear_registro1677(int id) {
    Registro1677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
