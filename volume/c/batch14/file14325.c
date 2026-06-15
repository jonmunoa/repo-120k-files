// fichero 14325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14325;

Registro14325 crear_registro14325(int id) {
    Registro14325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
