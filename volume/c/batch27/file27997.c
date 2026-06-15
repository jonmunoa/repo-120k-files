// fichero 27997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27997;

Registro27997 crear_registro27997(int id) {
    Registro27997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
