// fichero 46197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46197;

Registro46197 crear_registro46197(int id) {
    Registro46197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
