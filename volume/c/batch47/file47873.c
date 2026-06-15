// fichero 47873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47873;

Registro47873 crear_registro47873(int id) {
    Registro47873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
