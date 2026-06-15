// fichero 389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro389;

Registro389 crear_registro389(int id) {
    Registro389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
