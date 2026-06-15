// fichero 27677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27677;

Registro27677 crear_registro27677(int id) {
    Registro27677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
