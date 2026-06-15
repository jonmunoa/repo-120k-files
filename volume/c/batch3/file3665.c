// fichero 3665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3665;

Registro3665 crear_registro3665(int id) {
    Registro3665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
