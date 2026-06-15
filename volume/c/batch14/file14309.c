// fichero 14309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14309;

Registro14309 crear_registro14309(int id) {
    Registro14309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
