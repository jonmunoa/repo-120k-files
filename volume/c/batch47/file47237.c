// fichero 47237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47237;

Registro47237 crear_registro47237(int id) {
    Registro47237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
