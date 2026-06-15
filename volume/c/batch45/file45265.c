// fichero 45265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45265;

Registro45265 crear_registro45265(int id) {
    Registro45265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
