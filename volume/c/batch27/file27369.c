// fichero 27369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27369;

Registro27369 crear_registro27369(int id) {
    Registro27369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
