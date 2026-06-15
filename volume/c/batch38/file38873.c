// fichero 38873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38873;

Registro38873 crear_registro38873(int id) {
    Registro38873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
