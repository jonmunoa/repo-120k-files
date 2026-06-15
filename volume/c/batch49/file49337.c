// fichero 49337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49337;

Registro49337 crear_registro49337(int id) {
    Registro49337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
