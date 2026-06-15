// fichero 34053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34053;

Registro34053 crear_registro34053(int id) {
    Registro34053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
