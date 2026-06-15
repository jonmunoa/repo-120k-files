// fichero 24469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24469;

Registro24469 crear_registro24469(int id) {
    Registro24469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
