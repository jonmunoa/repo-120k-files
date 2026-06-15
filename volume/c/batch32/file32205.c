// fichero 32205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32205;

Registro32205 crear_registro32205(int id) {
    Registro32205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
