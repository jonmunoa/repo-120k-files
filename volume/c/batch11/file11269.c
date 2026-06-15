// fichero 11269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11269;

Registro11269 crear_registro11269(int id) {
    Registro11269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
