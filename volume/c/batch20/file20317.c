// fichero 20317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20317;

Registro20317 crear_registro20317(int id) {
    Registro20317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
