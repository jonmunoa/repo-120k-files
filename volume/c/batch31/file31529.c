// fichero 31529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31529;

Registro31529 crear_registro31529(int id) {
    Registro31529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
