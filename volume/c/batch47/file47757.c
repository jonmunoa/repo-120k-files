// fichero 47757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47757;

Registro47757 crear_registro47757(int id) {
    Registro47757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
