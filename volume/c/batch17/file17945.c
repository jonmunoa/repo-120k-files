// fichero 17945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17945;

Registro17945 crear_registro17945(int id) {
    Registro17945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
