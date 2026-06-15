// fichero 31937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31937;

Registro31937 crear_registro31937(int id) {
    Registro31937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
