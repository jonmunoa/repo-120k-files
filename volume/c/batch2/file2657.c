// fichero 2657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2657;

Registro2657 crear_registro2657(int id) {
    Registro2657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
