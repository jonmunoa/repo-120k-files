// fichero 48265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48265;

Registro48265 crear_registro48265(int id) {
    Registro48265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
