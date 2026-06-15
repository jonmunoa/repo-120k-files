// fichero 8921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8921;

Registro8921 crear_registro8921(int id) {
    Registro8921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
