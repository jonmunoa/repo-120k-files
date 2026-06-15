// fichero 14453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14453;

Registro14453 crear_registro14453(int id) {
    Registro14453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
