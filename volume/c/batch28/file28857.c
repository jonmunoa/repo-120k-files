// fichero 28857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28857;

Registro28857 crear_registro28857(int id) {
    Registro28857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
