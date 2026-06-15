// fichero 27929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27929;

Registro27929 crear_registro27929(int id) {
    Registro27929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
