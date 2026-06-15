// fichero 16509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16509;

Registro16509 crear_registro16509(int id) {
    Registro16509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
