// fichero 27453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27453;

Registro27453 crear_registro27453(int id) {
    Registro27453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
