// fichero 20517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20517;

Registro20517 crear_registro20517(int id) {
    Registro20517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
