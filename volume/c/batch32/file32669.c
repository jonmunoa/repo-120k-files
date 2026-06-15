// fichero 32669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32669;

Registro32669 crear_registro32669(int id) {
    Registro32669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
