// fichero 45309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45309;

Registro45309 crear_registro45309(int id) {
    Registro45309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
