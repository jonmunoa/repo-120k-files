// fichero 309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro309;

Registro309 crear_registro309(int id) {
    Registro309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
