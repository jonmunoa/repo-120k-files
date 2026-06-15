// fichero 45369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45369;

Registro45369 crear_registro45369(int id) {
    Registro45369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
