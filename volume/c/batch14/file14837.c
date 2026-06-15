// fichero 14837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14837;

Registro14837 crear_registro14837(int id) {
    Registro14837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
