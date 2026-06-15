// fichero 6401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6401;

Registro6401 crear_registro6401(int id) {
    Registro6401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
