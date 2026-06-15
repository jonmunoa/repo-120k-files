// fichero 33421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33421;

Registro33421 crear_registro33421(int id) {
    Registro33421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
