// fichero 33021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33021;

Registro33021 crear_registro33021(int id) {
    Registro33021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
