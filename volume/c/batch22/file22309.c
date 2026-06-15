// fichero 22309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22309;

Registro22309 crear_registro22309(int id) {
    Registro22309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
