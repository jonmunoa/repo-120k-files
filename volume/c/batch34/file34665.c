// fichero 34665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34665;

Registro34665 crear_registro34665(int id) {
    Registro34665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
