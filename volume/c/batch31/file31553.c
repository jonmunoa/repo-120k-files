// fichero 31553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31553;

Registro31553 crear_registro31553(int id) {
    Registro31553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
