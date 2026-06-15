// fichero 14045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14045;

Registro14045 crear_registro14045(int id) {
    Registro14045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
