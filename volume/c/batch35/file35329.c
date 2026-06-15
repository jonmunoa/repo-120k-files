// fichero 35329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35329;

Registro35329 crear_registro35329(int id) {
    Registro35329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
