// fichero 5401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5401;

Registro5401 crear_registro5401(int id) {
    Registro5401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
