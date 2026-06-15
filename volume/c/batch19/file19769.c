// fichero 19769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19769;

Registro19769 crear_registro19769(int id) {
    Registro19769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
