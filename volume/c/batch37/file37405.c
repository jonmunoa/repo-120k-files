// fichero 37405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37405;

Registro37405 crear_registro37405(int id) {
    Registro37405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
