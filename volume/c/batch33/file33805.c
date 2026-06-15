// fichero 33805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33805;

Registro33805 crear_registro33805(int id) {
    Registro33805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
