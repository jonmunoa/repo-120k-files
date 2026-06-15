// fichero 30229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30229;

Registro30229 crear_registro30229(int id) {
    Registro30229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
