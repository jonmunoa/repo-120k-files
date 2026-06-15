// fichero 31097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31097;

Registro31097 crear_registro31097(int id) {
    Registro31097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
