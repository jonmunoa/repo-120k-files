// fichero 873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro873;

Registro873 crear_registro873(int id) {
    Registro873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
