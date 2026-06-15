// fichero 19401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19401;

Registro19401 crear_registro19401(int id) {
    Registro19401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
