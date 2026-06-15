// fichero 36665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36665;

Registro36665 crear_registro36665(int id) {
    Registro36665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
