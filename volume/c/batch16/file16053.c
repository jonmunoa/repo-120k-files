// fichero 16053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16053;

Registro16053 crear_registro16053(int id) {
    Registro16053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
