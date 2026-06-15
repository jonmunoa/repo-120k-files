// fichero 26485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26485;

Registro26485 crear_registro26485(int id) {
    Registro26485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
