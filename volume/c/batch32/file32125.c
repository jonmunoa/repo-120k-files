// fichero 32125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32125;

Registro32125 crear_registro32125(int id) {
    Registro32125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
