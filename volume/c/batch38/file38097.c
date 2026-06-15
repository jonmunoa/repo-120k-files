// fichero 38097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38097;

Registro38097 crear_registro38097(int id) {
    Registro38097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
