// fichero 46933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46933;

Registro46933 crear_registro46933(int id) {
    Registro46933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
