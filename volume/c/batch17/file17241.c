// fichero 17241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17241;

Registro17241 crear_registro17241(int id) {
    Registro17241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
