// fichero 32573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32573;

Registro32573 crear_registro32573(int id) {
    Registro32573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
