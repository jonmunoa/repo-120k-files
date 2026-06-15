// fichero 38205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38205;

Registro38205 crear_registro38205(int id) {
    Registro38205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
