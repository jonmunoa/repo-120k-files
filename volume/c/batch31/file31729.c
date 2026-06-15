// fichero 31729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31729;

Registro31729 crear_registro31729(int id) {
    Registro31729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
