// fichero 8869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8869;

Registro8869 crear_registro8869(int id) {
    Registro8869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
