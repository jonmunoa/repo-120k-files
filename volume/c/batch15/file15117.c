// fichero 15117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15117;

Registro15117 crear_registro15117(int id) {
    Registro15117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
