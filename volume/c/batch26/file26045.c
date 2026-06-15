// fichero 26045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26045;

Registro26045 crear_registro26045(int id) {
    Registro26045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
