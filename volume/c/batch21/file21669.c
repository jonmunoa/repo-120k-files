// fichero 21669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21669;

Registro21669 crear_registro21669(int id) {
    Registro21669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
