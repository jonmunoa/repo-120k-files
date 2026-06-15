// fichero 11225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11225;

Registro11225 crear_registro11225(int id) {
    Registro11225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
