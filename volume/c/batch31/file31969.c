// fichero 31969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31969;

Registro31969 crear_registro31969(int id) {
    Registro31969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
