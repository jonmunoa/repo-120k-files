// fichero 14145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14145;

Registro14145 crear_registro14145(int id) {
    Registro14145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
