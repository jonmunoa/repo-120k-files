// fichero 31197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31197;

Registro31197 crear_registro31197(int id) {
    Registro31197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
