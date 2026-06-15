// fichero 44665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44665;

Registro44665 crear_registro44665(int id) {
    Registro44665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
