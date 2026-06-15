// fichero 1901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1901;

Registro1901 crear_registro1901(int id) {
    Registro1901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
