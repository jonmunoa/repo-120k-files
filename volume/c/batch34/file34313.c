// fichero 34313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34313;

Registro34313 crear_registro34313(int id) {
    Registro34313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
