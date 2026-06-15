// fichero 28429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28429;

Registro28429 crear_registro28429(int id) {
    Registro28429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
