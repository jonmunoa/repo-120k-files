// fichero 27873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27873;

Registro27873 crear_registro27873(int id) {
    Registro27873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
