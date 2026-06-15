// fichero 1797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1797;

Registro1797 crear_registro1797(int id) {
    Registro1797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
