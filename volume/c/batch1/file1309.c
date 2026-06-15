// fichero 1309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1309;

Registro1309 crear_registro1309(int id) {
    Registro1309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
