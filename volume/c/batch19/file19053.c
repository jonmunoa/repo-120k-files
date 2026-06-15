// fichero 19053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19053;

Registro19053 crear_registro19053(int id) {
    Registro19053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
