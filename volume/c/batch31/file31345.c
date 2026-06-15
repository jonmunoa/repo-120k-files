// fichero 31345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31345;

Registro31345 crear_registro31345(int id) {
    Registro31345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
