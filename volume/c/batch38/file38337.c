// fichero 38337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38337;

Registro38337 crear_registro38337(int id) {
    Registro38337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
