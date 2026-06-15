// fichero 43309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43309;

Registro43309 crear_registro43309(int id) {
    Registro43309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
