// fichero 24617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24617;

Registro24617 crear_registro24617(int id) {
    Registro24617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
