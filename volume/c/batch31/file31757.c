// fichero 31757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31757;

Registro31757 crear_registro31757(int id) {
    Registro31757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
