// fichero 39309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39309;

Registro39309 crear_registro39309(int id) {
    Registro39309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
