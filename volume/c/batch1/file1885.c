// fichero 1885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1885;

Registro1885 crear_registro1885(int id) {
    Registro1885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
