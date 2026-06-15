// fichero 205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro205;

Registro205 crear_registro205(int id) {
    Registro205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
