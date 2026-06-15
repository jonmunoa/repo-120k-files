// fichero 45993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45993;

Registro45993 crear_registro45993(int id) {
    Registro45993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
