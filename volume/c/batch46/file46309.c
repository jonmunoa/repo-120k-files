// fichero 46309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46309;

Registro46309 crear_registro46309(int id) {
    Registro46309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
