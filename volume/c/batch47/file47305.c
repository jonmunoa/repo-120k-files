// fichero 47305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47305;

Registro47305 crear_registro47305(int id) {
    Registro47305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
