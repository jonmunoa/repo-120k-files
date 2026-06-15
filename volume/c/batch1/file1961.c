// fichero 1961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1961;

Registro1961 crear_registro1961(int id) {
    Registro1961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
