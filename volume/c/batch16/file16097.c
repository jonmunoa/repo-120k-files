// fichero 16097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16097;

Registro16097 crear_registro16097(int id) {
    Registro16097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
