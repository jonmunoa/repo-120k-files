// fichero 6301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6301;

Registro6301 crear_registro6301(int id) {
    Registro6301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
