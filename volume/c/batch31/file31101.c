// fichero 31101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31101;

Registro31101 crear_registro31101(int id) {
    Registro31101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
