// fichero 15869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15869;

Registro15869 crear_registro15869(int id) {
    Registro15869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
