// fichero 42053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42053;

Registro42053 crear_registro42053(int id) {
    Registro42053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
