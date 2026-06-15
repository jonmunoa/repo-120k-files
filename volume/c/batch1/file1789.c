// fichero 1789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1789;

Registro1789 crear_registro1789(int id) {
    Registro1789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
