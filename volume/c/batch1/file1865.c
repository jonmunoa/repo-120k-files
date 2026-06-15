// fichero 1865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1865;

Registro1865 crear_registro1865(int id) {
    Registro1865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
