// fichero 14873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14873;

Registro14873 crear_registro14873(int id) {
    Registro14873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
