// fichero 24937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24937;

Registro24937 crear_registro24937(int id) {
    Registro24937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
