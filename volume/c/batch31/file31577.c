// fichero 31577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31577;

Registro31577 crear_registro31577(int id) {
    Registro31577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
