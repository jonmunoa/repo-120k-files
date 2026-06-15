// fichero 14141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14141;

Registro14141 crear_registro14141(int id) {
    Registro14141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
