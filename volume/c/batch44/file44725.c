// fichero 44725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44725;

Registro44725 crear_registro44725(int id) {
    Registro44725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
