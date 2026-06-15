// fichero 11349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11349;

Registro11349 crear_registro11349(int id) {
    Registro11349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
