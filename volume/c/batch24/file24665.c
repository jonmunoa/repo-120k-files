// fichero 24665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24665;

Registro24665 crear_registro24665(int id) {
    Registro24665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
