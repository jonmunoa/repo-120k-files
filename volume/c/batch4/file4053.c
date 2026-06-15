// fichero 4053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4053;

Registro4053 crear_registro4053(int id) {
    Registro4053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
