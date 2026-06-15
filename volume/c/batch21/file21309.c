// fichero 21309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21309;

Registro21309 crear_registro21309(int id) {
    Registro21309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
