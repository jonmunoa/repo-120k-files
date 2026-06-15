// fichero 19117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19117;

Registro19117 crear_registro19117(int id) {
    Registro19117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
