// fichero 32949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32949;

Registro32949 crear_registro32949(int id) {
    Registro32949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
