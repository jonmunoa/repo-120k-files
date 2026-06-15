// fichero 40581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40581;

Registro40581 crear_registro40581(int id) {
    Registro40581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
