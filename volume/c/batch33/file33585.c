// fichero 33585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33585;

Registro33585 crear_registro33585(int id) {
    Registro33585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
