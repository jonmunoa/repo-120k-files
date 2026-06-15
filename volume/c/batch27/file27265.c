// fichero 27265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27265;

Registro27265 crear_registro27265(int id) {
    Registro27265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
