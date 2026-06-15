// fichero 35213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35213;

Registro35213 crear_registro35213(int id) {
    Registro35213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
