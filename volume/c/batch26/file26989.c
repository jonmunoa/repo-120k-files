// fichero 26989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26989;

Registro26989 crear_registro26989(int id) {
    Registro26989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
