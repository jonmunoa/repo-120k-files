// fichero 45129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45129;

Registro45129 crear_registro45129(int id) {
    Registro45129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
