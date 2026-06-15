// fichero 42309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42309;

Registro42309 crear_registro42309(int id) {
    Registro42309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
