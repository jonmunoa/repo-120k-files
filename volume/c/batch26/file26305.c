// fichero 26305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26305;

Registro26305 crear_registro26305(int id) {
    Registro26305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
