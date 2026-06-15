// fichero 26605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26605;

Registro26605 crear_registro26605(int id) {
    Registro26605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
