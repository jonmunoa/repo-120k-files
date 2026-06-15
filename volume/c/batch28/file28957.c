// fichero 28957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28957;

Registro28957 crear_registro28957(int id) {
    Registro28957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
