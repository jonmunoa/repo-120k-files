// fichero 27649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27649;

Registro27649 crear_registro27649(int id) {
    Registro27649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
