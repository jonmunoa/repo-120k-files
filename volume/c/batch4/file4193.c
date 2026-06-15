// fichero 4193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4193;

Registro4193 crear_registro4193(int id) {
    Registro4193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
