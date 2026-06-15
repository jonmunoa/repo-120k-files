// fichero 48109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48109;

Registro48109 crear_registro48109(int id) {
    Registro48109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
