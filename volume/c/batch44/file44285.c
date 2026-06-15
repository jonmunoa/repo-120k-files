// fichero 44285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44285;

Registro44285 crear_registro44285(int id) {
    Registro44285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
