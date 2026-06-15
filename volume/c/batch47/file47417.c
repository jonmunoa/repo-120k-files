// fichero 47417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47417;

Registro47417 crear_registro47417(int id) {
    Registro47417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
