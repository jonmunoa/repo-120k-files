// fichero 33885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33885;

Registro33885 crear_registro33885(int id) {
    Registro33885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
