// fichero 47541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47541;

Registro47541 crear_registro47541(int id) {
    Registro47541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
