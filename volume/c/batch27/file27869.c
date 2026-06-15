// fichero 27869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27869;

Registro27869 crear_registro27869(int id) {
    Registro27869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
