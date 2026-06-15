// fichero 31177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31177;

Registro31177 crear_registro31177(int id) {
    Registro31177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
