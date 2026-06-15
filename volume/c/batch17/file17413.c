// fichero 17413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17413;

Registro17413 crear_registro17413(int id) {
    Registro17413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
