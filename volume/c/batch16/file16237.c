// fichero 16237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16237;

Registro16237 crear_registro16237(int id) {
    Registro16237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
