// fichero 18789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18789;

Registro18789 crear_registro18789(int id) {
    Registro18789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
