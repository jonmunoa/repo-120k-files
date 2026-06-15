// fichero 22521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22521;

Registro22521 crear_registro22521(int id) {
    Registro22521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
