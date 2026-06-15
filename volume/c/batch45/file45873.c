// fichero 45873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45873;

Registro45873 crear_registro45873(int id) {
    Registro45873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
