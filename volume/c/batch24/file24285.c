// fichero 24285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24285;

Registro24285 crear_registro24285(int id) {
    Registro24285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
