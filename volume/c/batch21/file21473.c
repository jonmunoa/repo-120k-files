// fichero 21473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21473;

Registro21473 crear_registro21473(int id) {
    Registro21473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
