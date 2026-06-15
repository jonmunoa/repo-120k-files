// fichero 21141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21141;

Registro21141 crear_registro21141(int id) {
    Registro21141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
