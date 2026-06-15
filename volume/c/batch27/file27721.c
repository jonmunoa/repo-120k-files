// fichero 27721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27721;

Registro27721 crear_registro27721(int id) {
    Registro27721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
