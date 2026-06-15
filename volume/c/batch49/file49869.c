// fichero 49869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49869;

Registro49869 crear_registro49869(int id) {
    Registro49869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
