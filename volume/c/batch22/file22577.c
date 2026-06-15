// fichero 22577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22577;

Registro22577 crear_registro22577(int id) {
    Registro22577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
