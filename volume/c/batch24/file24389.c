// fichero 24389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24389;

Registro24389 crear_registro24389(int id) {
    Registro24389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
