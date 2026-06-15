// fichero 27101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27101;

Registro27101 crear_registro27101(int id) {
    Registro27101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
