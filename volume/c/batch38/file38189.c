// fichero 38189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38189;

Registro38189 crear_registro38189(int id) {
    Registro38189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
