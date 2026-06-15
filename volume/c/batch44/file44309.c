// fichero 44309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44309;

Registro44309 crear_registro44309(int id) {
    Registro44309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
