// fichero 31853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31853;

Registro31853 crear_registro31853(int id) {
    Registro31853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
