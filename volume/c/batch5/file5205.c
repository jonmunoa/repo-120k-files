// fichero 5205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5205;

Registro5205 crear_registro5205(int id) {
    Registro5205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
