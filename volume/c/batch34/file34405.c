// fichero 34405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34405;

Registro34405 crear_registro34405(int id) {
    Registro34405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
