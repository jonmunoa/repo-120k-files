// fichero 16865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16865;

Registro16865 crear_registro16865(int id) {
    Registro16865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
