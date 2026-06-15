// fichero 1921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1921;

Registro1921 crear_registro1921(int id) {
    Registro1921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
