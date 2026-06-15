// fichero 24573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24573;

Registro24573 crear_registro24573(int id) {
    Registro24573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
