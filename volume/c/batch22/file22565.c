// fichero 22565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22565;

Registro22565 crear_registro22565(int id) {
    Registro22565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
