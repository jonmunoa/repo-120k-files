// fichero 30665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30665;

Registro30665 crear_registro30665(int id) {
    Registro30665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
