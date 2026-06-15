// fichero 46869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46869;

Registro46869 crear_registro46869(int id) {
    Registro46869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
