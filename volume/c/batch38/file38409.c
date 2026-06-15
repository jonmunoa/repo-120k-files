// fichero 38409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38409;

Registro38409 crear_registro38409(int id) {
    Registro38409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
