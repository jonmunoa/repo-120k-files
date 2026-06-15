// fichero 11453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11453;

Registro11453 crear_registro11453(int id) {
    Registro11453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
