// fichero 35309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35309;

Registro35309 crear_registro35309(int id) {
    Registro35309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
