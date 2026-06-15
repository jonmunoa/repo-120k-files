// fichero 20013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20013;

Registro20013 crear_registro20013(int id) {
    Registro20013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
