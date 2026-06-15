// fichero 265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro265;

Registro265 crear_registro265(int id) {
    Registro265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
