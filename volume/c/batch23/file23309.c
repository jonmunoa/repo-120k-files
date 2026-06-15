// fichero 23309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23309;

Registro23309 crear_registro23309(int id) {
    Registro23309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
