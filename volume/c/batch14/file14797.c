// fichero 14797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14797;

Registro14797 crear_registro14797(int id) {
    Registro14797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
