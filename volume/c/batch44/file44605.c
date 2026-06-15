// fichero 44605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44605;

Registro44605 crear_registro44605(int id) {
    Registro44605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
