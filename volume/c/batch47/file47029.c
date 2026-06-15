// fichero 47029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47029;

Registro47029 crear_registro47029(int id) {
    Registro47029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
