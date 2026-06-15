// fichero 28173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28173;

Registro28173 crear_registro28173(int id) {
    Registro28173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
