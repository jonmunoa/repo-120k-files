// fichero 19449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19449;

Registro19449 crear_registro19449(int id) {
    Registro19449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
