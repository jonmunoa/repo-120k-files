// fichero 11965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11965;

Registro11965 crear_registro11965(int id) {
    Registro11965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
