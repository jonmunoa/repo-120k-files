// fichero 20665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20665;

Registro20665 crear_registro20665(int id) {
    Registro20665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
