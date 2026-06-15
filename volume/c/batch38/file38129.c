// fichero 38129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38129;

Registro38129 crear_registro38129(int id) {
    Registro38129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
