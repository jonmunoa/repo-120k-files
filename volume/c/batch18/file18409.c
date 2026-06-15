// fichero 18409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18409;

Registro18409 crear_registro18409(int id) {
    Registro18409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
