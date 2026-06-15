// fichero 1197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1197;

Registro1197 crear_registro1197(int id) {
    Registro1197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
