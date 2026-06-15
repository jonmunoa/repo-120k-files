// fichero 32737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32737;

Registro32737 crear_registro32737(int id) {
    Registro32737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
