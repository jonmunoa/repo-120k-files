// fichero 45381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45381;

Registro45381 crear_registro45381(int id) {
    Registro45381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
