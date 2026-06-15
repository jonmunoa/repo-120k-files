// fichero 20625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20625;

Registro20625 crear_registro20625(int id) {
    Registro20625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
