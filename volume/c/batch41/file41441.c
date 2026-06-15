// fichero 41441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41441;

Registro41441 crear_registro41441(int id) {
    Registro41441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
