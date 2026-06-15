// fichero 34657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34657;

Registro34657 crear_registro34657(int id) {
    Registro34657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
