// fichero 1393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1393;

Registro1393 crear_registro1393(int id) {
    Registro1393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
