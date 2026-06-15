// fichero 46053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46053;

Registro46053 crear_registro46053(int id) {
    Registro46053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
