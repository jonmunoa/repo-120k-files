// fichero 31605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31605;

Registro31605 crear_registro31605(int id) {
    Registro31605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
