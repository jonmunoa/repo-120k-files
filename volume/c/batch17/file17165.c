// fichero 17165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17165;

Registro17165 crear_registro17165(int id) {
    Registro17165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
