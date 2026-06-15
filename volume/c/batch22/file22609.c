// fichero 22609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22609;

Registro22609 crear_registro22609(int id) {
    Registro22609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
