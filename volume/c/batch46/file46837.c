// fichero 46837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46837;

Registro46837 crear_registro46837(int id) {
    Registro46837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
