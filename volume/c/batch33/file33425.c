// fichero 33425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33425;

Registro33425 crear_registro33425(int id) {
    Registro33425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
