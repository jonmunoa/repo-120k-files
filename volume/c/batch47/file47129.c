// fichero 47129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47129;

Registro47129 crear_registro47129(int id) {
    Registro47129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
