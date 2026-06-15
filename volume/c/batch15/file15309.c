// fichero 15309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15309;

Registro15309 crear_registro15309(int id) {
    Registro15309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
