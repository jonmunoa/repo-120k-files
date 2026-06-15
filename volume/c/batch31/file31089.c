// fichero 31089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31089;

Registro31089 crear_registro31089(int id) {
    Registro31089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
