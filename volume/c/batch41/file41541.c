// fichero 41541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41541;

Registro41541 crear_registro41541(int id) {
    Registro41541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
