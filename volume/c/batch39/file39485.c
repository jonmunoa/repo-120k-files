// fichero 39485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39485;

Registro39485 crear_registro39485(int id) {
    Registro39485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
