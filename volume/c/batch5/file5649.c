// fichero 5649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5649;

Registro5649 crear_registro5649(int id) {
    Registro5649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
