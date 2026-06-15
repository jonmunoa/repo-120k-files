// fichero 21341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21341;

Registro21341 crear_registro21341(int id) {
    Registro21341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
