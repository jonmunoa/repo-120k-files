// fichero 35665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35665;

Registro35665 crear_registro35665(int id) {
    Registro35665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
