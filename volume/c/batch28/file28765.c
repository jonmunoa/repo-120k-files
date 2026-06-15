// fichero 28765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28765;

Registro28765 crear_registro28765(int id) {
    Registro28765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
