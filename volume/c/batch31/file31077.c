// fichero 31077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31077;

Registro31077 crear_registro31077(int id) {
    Registro31077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
