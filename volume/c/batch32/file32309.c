// fichero 32309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32309;

Registro32309 crear_registro32309(int id) {
    Registro32309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
