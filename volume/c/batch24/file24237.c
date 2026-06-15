// fichero 24237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24237;

Registro24237 crear_registro24237(int id) {
    Registro24237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
