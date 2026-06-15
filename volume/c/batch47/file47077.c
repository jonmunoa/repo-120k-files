// fichero 47077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47077;

Registro47077 crear_registro47077(int id) {
    Registro47077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
