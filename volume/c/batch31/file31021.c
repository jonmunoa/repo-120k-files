// fichero 31021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31021;

Registro31021 crear_registro31021(int id) {
    Registro31021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
