// fichero 97 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro97;

Registro97 crear_registro97(int id) {
    Registro97 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
