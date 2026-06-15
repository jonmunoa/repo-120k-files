// fichero 32837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32837;

Registro32837 crear_registro32837(int id) {
    Registro32837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
