// fichero 31233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31233;

Registro31233 crear_registro31233(int id) {
    Registro31233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
