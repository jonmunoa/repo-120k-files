// fichero 21829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21829;

Registro21829 crear_registro21829(int id) {
    Registro21829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
