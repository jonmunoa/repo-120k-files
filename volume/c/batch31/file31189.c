// fichero 31189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31189;

Registro31189 crear_registro31189(int id) {
    Registro31189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
