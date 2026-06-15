// fichero 47881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47881;

Registro47881 crear_registro47881(int id) {
    Registro47881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
