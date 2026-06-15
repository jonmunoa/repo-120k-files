// fichero 44117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44117;

Registro44117 crear_registro44117(int id) {
    Registro44117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
