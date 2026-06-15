// fichero 885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro885;

Registro885 crear_registro885(int id) {
    Registro885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
