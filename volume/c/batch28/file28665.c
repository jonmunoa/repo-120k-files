// fichero 28665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28665;

Registro28665 crear_registro28665(int id) {
    Registro28665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
