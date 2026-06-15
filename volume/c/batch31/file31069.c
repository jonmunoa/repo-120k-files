// fichero 31069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31069;

Registro31069 crear_registro31069(int id) {
    Registro31069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
