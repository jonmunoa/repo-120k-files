// fichero 49017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49017;

Registro49017 crear_registro49017(int id) {
    Registro49017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
