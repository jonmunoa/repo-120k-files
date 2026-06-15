// fichero 28241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28241;

Registro28241 crear_registro28241(int id) {
    Registro28241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
