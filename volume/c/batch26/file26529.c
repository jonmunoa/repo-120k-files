// fichero 26529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26529;

Registro26529 crear_registro26529(int id) {
    Registro26529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
