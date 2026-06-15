// fichero 47661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47661;

Registro47661 crear_registro47661(int id) {
    Registro47661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
