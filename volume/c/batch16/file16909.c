// fichero 16909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16909;

Registro16909 crear_registro16909(int id) {
    Registro16909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
