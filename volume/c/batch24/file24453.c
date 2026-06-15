// fichero 24453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24453;

Registro24453 crear_registro24453(int id) {
    Registro24453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
