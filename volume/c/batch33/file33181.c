// fichero 33181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33181;

Registro33181 crear_registro33181(int id) {
    Registro33181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
