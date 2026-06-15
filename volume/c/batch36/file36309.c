// fichero 36309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36309;

Registro36309 crear_registro36309(int id) {
    Registro36309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
