// fichero 16869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16869;

Registro16869 crear_registro16869(int id) {
    Registro16869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
