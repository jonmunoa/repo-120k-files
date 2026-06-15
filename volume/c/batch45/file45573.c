// fichero 45573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45573;

Registro45573 crear_registro45573(int id) {
    Registro45573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
