// fichero 44401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44401;

Registro44401 crear_registro44401(int id) {
    Registro44401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
