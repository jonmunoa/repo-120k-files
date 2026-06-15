// fichero 1101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1101;

Registro1101 crear_registro1101(int id) {
    Registro1101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
