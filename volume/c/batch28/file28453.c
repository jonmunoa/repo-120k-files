// fichero 28453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28453;

Registro28453 crear_registro28453(int id) {
    Registro28453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
