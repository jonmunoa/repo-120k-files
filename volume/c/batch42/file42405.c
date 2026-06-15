// fichero 42405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42405;

Registro42405 crear_registro42405(int id) {
    Registro42405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
