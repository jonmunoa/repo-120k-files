// fichero 32221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32221;

Registro32221 crear_registro32221(int id) {
    Registro32221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
