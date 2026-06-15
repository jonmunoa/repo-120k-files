// fichero 28053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28053;

Registro28053 crear_registro28053(int id) {
    Registro28053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
