// fichero 34377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34377;

Registro34377 crear_registro34377(int id) {
    Registro34377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
