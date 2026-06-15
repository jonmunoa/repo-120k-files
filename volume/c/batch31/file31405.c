// fichero 31405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31405;

Registro31405 crear_registro31405(int id) {
    Registro31405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
