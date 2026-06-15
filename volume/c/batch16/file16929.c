// fichero 16929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16929;

Registro16929 crear_registro16929(int id) {
    Registro16929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
