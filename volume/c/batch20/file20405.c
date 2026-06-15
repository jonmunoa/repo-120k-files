// fichero 20405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20405;

Registro20405 crear_registro20405(int id) {
    Registro20405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
