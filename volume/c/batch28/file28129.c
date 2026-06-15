// fichero 28129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28129;

Registro28129 crear_registro28129(int id) {
    Registro28129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
