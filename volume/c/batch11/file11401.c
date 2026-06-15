// fichero 11401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11401;

Registro11401 crear_registro11401(int id) {
    Registro11401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
