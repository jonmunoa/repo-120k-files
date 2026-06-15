// fichero 43157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43157;

Registro43157 crear_registro43157(int id) {
    Registro43157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
