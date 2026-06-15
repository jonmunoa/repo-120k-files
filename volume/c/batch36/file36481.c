// fichero 36481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36481;

Registro36481 crear_registro36481(int id) {
    Registro36481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
