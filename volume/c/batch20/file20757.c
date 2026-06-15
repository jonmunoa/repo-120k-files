// fichero 20757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20757;

Registro20757 crear_registro20757(int id) {
    Registro20757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
