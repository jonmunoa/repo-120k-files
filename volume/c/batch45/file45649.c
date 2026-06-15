// fichero 45649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45649;

Registro45649 crear_registro45649(int id) {
    Registro45649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
