// fichero 47885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47885;

Registro47885 crear_registro47885(int id) {
    Registro47885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
