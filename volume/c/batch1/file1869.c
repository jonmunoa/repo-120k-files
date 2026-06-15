// fichero 1869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1869;

Registro1869 crear_registro1869(int id) {
    Registro1869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
