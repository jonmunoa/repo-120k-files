// fichero 34349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34349;

Registro34349 crear_registro34349(int id) {
    Registro34349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
