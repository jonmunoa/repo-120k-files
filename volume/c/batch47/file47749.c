// fichero 47749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47749;

Registro47749 crear_registro47749(int id) {
    Registro47749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
