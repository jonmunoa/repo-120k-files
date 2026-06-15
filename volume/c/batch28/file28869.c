// fichero 28869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28869;

Registro28869 crear_registro28869(int id) {
    Registro28869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
