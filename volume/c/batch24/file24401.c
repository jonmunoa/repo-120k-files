// fichero 24401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24401;

Registro24401 crear_registro24401(int id) {
    Registro24401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
