// fichero 24817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24817;

Registro24817 crear_registro24817(int id) {
    Registro24817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
