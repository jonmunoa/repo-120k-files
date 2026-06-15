// fichero 7933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7933;

Registro7933 crear_registro7933(int id) {
    Registro7933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
