// fichero 17433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17433;

Registro17433 crear_registro17433(int id) {
    Registro17433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
