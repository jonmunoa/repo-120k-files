// fichero 34989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34989;

Registro34989 crear_registro34989(int id) {
    Registro34989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
