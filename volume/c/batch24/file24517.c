// fichero 24517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24517;

Registro24517 crear_registro24517(int id) {
    Registro24517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
