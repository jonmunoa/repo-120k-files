// fichero 16873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16873;

Registro16873 crear_registro16873(int id) {
    Registro16873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
