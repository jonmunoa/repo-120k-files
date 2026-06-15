// fichero 18249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18249;

Registro18249 crear_registro18249(int id) {
    Registro18249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
