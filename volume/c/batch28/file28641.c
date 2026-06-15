// fichero 28641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28641;

Registro28641 crear_registro28641(int id) {
    Registro28641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
