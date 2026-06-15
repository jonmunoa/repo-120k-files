// fichero 7873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7873;

Registro7873 crear_registro7873(int id) {
    Registro7873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
