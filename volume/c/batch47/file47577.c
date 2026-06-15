// fichero 47577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47577;

Registro47577 crear_registro47577(int id) {
    Registro47577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
