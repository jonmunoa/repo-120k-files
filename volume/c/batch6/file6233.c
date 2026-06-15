// fichero 6233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6233;

Registro6233 crear_registro6233(int id) {
    Registro6233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
