// fichero 16309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16309;

Registro16309 crear_registro16309(int id) {
    Registro16309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
