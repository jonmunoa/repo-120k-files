// fichero 11341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11341;

Registro11341 crear_registro11341(int id) {
    Registro11341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
