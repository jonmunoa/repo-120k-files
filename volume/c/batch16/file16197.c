// fichero 16197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16197;

Registro16197 crear_registro16197(int id) {
    Registro16197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
