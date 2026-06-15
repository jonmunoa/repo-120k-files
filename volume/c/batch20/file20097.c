// fichero 20097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20097;

Registro20097 crear_registro20097(int id) {
    Registro20097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
