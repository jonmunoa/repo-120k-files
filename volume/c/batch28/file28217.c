// fichero 28217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28217;

Registro28217 crear_registro28217(int id) {
    Registro28217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
