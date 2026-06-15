// fichero 28581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28581;

Registro28581 crear_registro28581(int id) {
    Registro28581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
