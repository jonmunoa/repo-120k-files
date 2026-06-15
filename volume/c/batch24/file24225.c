// fichero 24225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24225;

Registro24225 crear_registro24225(int id) {
    Registro24225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
