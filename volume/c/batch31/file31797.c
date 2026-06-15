// fichero 31797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31797;

Registro31797 crear_registro31797(int id) {
    Registro31797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
