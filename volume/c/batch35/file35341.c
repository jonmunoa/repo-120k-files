// fichero 35341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35341;

Registro35341 crear_registro35341(int id) {
    Registro35341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
