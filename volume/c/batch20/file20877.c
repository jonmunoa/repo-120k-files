// fichero 20877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20877;

Registro20877 crear_registro20877(int id) {
    Registro20877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
