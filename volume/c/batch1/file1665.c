// fichero 1665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1665;

Registro1665 crear_registro1665(int id) {
    Registro1665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
