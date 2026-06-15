// fichero 33593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33593;

Registro33593 crear_registro33593(int id) {
    Registro33593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
