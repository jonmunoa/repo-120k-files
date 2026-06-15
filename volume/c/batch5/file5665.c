// fichero 5665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5665;

Registro5665 crear_registro5665(int id) {
    Registro5665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
