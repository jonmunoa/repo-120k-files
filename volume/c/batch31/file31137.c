// fichero 31137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31137;

Registro31137 crear_registro31137(int id) {
    Registro31137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
