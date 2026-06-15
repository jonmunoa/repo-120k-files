// fichero 32869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32869;

Registro32869 crear_registro32869(int id) {
    Registro32869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
