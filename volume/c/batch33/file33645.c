// fichero 33645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33645;

Registro33645 crear_registro33645(int id) {
    Registro33645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
