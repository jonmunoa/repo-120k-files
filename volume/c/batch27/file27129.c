// fichero 27129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27129;

Registro27129 crear_registro27129(int id) {
    Registro27129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
