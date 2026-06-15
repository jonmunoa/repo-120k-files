// fichero 24305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24305;

Registro24305 crear_registro24305(int id) {
    Registro24305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
