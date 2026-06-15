// fichero 14217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14217;

Registro14217 crear_registro14217(int id) {
    Registro14217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
