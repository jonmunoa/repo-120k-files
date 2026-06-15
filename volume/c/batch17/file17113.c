// fichero 17113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17113;

Registro17113 crear_registro17113(int id) {
    Registro17113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
