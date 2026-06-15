// fichero 24493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24493;

Registro24493 crear_registro24493(int id) {
    Registro24493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
