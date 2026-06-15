// fichero 14545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14545;

Registro14545 crear_registro14545(int id) {
    Registro14545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
