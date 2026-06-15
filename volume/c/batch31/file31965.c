// fichero 31965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31965;

Registro31965 crear_registro31965(int id) {
    Registro31965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
