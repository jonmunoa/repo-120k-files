// fichero 8029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8029;

Registro8029 crear_registro8029(int id) {
    Registro8029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
