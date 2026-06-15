// fichero 45677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45677;

Registro45677 crear_registro45677(int id) {
    Registro45677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
